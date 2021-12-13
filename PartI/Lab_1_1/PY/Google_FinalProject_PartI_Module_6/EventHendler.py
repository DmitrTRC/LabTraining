from Event import Event


def get_event_date(event):
    return event.date


def current_users(events):
    evetns.sort(key=get_event_date)
    machines = {}
    for event in events:
        if event.machine not in machines:
            machines[event.machine] = set()
        if event.type == 'login':
            machines[event.machine].add(event.user)
        elif event.type == 'logout':
            machines[event.machine].remove(event.user)
    return machines


def generate_report(machines):
    for machine, users in machines.items():
        if len(users) > 0:
            user_list = ', '.join(users)
            print(f'{machine}: {user_list}')


events = [
    Event('12:00:00', 'login', 'moxa', 'user1'),
    Event('13:00:00', 'logout', 'moxa', 'user1'),
    Event('12:00:00', 'login', 'moxa', 'user2'),
    Event('13:00:00', 'logout', 'moxa', 'user2'),
    Event('12:00:00', 'login', 'moxa', 'user3'),
    Event('13:00:00', 'logout', 'moxa', 'user3'),
    Event('12:00:00', 'login', 'moxa', 'user4')
    ]

users = current_users(events)
print(users)
